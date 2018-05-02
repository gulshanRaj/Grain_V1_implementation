# Grain_V1_implementation
This repository contains software implementation of GrainV1 cipher written in C.

[Link to paper](http://www.ecrypt.eu.org/stream/p3ciphers/grain/Grain_p3.pdf "GRAIN V1")

## Code
* __grain.h__ : definition of structures and functions used
* __grain.c__ : functions for performing encryption/decryption along with main

## Running the Code
Example with `gcc` on `linux` :
```
$ gcc grain.c -o filename
$ ./filename
 ```
## References
[1] Ecrypt page on GrainV1. It also provides a reference implementation. [Link](http://www.ecrypt.eu.org/stream/e2-grain.html)\
[2] GrainV1 implementation by Vaibhav Raj Gupta. [Link](https://github.com/gvaibhavraj2/grainv1cipher)
