# generatePassword

# Password Generator C++ Program

This is a simple C++ program that generates a randomized password based on a given length. The program uses a set of characters (letters, numbers, and special characters) to create a password, ensuring that the password is unpredictable and secure.

## Features

- Generates a random password of a user-defined length.
- The generated password can contain uppercase and lowercase letters, digits, and a variety of characters.
- Uses the `rand()` function and `srand()` for random number generation.
  
## How It Works

1. **Character Set**: The program defines a set of characters from which the password will be generated. This set includes:
   - Lowercase letters (`a-z`)
   - Uppercase letters (`A-Z`)
   - Digits (`0-9`)

2. **Random Index Generation**: The `rand()` function is used to generate random indices to select characters from the character set. The `srand()` function is used to seed the random number generator with the current time, ensuring that the randomization is different each time the program runs.

3. **Password Construction**: The program concatenates the selected characters one by one to form the password of the desired length.

4. **User Input**: The user is prompted to enter the desired length of the password, and the program then generates and displays the password accordingly.

## How to Use

### Prerequisites

- A C++ compiler (such as GCC or MSVC)
- A text editor or IDE (such as Visual Studio Code, Code::Blocks, or Visual Studio)

### Steps to Compile and Run

1. Clone or download the repository to your local machine.

2. Open a terminal (or use an IDE) and navigate to the folder containing the program.

3. Compile the program using a C++ compiler. For example, using `g++`:
   ```bash
   g++ generatepassword.cpp -o generatepassword

  ##Github link:  https://github.com/zackadoodledoo/generatePassword
