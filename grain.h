#ifndef GRAIN_H
#define GRAIN_H
 
#define INITCLOCKS 160
#define N(i) (mygrain->NFSR[80-i])
#define L(i) (mygrain->LFSR[80-i])
#define X0 (mygrain->LFSR[3])
#define X1 (mygrain->LFSR[25])
#define X2 (mygrain->LFSR[46])
#define X3 (mygrain->LFSR[64])
#define X4 (mygrain->NFSR[63])
 
typedef struct
{
	int LFSR[80];
	int NFSR[80];
	const int* p_key;
	int keysize;
	int ivsize;
 
} grain;
 
void keysetup(
  grain* mygrain, 
  const int* key, 
  int keysize,                /* Key size in bits. */ 
  int ivsize);                /* IV size in bits. */ 
 
void ivsetup(
  grain* mygrain, 
  const int* iv);
 
void keystream_bytes(
  grain* mygrain,
  int* keystream,
  int length);
 
void encrypt_bytes(
  grain* mygrain, 
  const int* plaintext, 
  int* ciphertext, 
  int msglen);                /* Message length in bytes. */ 
 
void decrypt_bytes(
  grain* mygrain, 
  const int* ciphertext, 
  int* plaintext, 
  int msglen);  
 
#endif