# **LibFT**

WeThinkCode_ Core project

### **Descripton**
The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects

## Installation

Clone the LibFT repo and change to the repo directory:

```
git clone https://github.com/veronar/libft
cd ./libft/libft/
```

### Compilation

LibFT is compiled with a `Makefile`; to compile, run the following command:

```
make
```
If edits are made LibFT will need to be recompiled  
To recompile run the following command:

```
make re
```

## Usage

To use the library  `#include "libft.h"` will need to be added to the list of included libraries & its will need to be in the correct directory.  
If additional functions are added to LibFT, the function will need to be prototyped in the `libft.h` file & LibFT will need to be recompiled.

### Compiling with libft.a

Run the following command, by adding the relevant compilation files.

```
gcc [your main] [other files] [flags] libft.a
./a.out
```
