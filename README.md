# 3207-Lab-Introduction_F23
In this lab, you will be learning about git and some of the features of git and GitHub. A part of the lab will be to clone this repository and and then make changes to the repository.
The attached simple source file print_random.c is to be modified by you to include a function that implements the randchar() function.
See the instructions in the GitHW1a file

## Documentation
Created random.c to define the randchar() function, and header file random.h to define the function prototype. The randomizer is seeded in print_random.c, and without it rand() produces the same 7 random characters each time the program is run. The rand() function generates a random number 0 to RAND_MAX, and calculates the remainder of that number and the number of ASCII characters that display properly in the cis2-linux server.
## Troubleshooting
### SSH Key
I initially struggled to connect two Github accounts to Git on my computer. I learned that I can create an SSH key for each account, and clone repositories with SSH instead of HTTPS or Github CLI.

[Source 1](https://stackoverflow.com/questions/3860112/multiple-github-accounts-on-the-same-computer) [Source 2](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account)

### ASCII
Using 256, the total number of ASCII characters, worked on my local machine but on the cis2-linux server many of the characters were not recognized. 0 - 32, 127 are [control characters](https://www.ascii-code.com/characters/control-characters) and do not display anything, and 128-255 are [8-bit ASCII](https://www.ascii-code.com/glossary/extended-ascii). I successfully generated characters the cis2-linux server recognized with the following code:

`(rand() % (126 - 33) + 33)`