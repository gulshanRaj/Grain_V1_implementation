# Grain v1
This repository contains software implementation of Grain v1 cipher written in C.

[Link to paper](http://www.ecrypt.eu.org/stream/p3ciphers/grain/Grain_p3.pdf "GRAIN v1")

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
[1] Ecrypt page on Grain v1. It also provides a reference implementation. [Link](http://www.ecrypt.eu.org/stream/e2-grain.html)\
[2] Grain v1 implementation by Vaibhav Raj Gupta. [Link](https://github.com/gvaibhavraj2/grainv1cipher)
