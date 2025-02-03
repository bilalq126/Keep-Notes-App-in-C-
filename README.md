# Keep Notes - File Management Tool

## Description
Keep Notes is a simple console-based file management program written in C++. The program allows users to perform basic operations on text files, such as creating, editing, viewing, and deleting files. This lightweight and efficient tool is perfect for learning file I/O operations in C++.

## Features
- **Create Files:** Create new text files.
- **Edit Files:** Append content to existing files.
- **Show File Content:** Display the content of a file.
- **Delete Files:** Delete unwanted files.

## How to Use
### 1. Clone the Repository
```bash
git clone https://github.com/your-username/keep-notes.git
cd keep-notes
```

### 2. Compile the Program
To compile the code, use any C++ compiler. Below is an example using `g++`:
```bash
g++ -o keep_notes keep_notes.cpp
```

### 3. Run the Program
```bash
./keep_notes
```

### 4. Program Options
After running the program, you will see the following options:
```
Options:
1. Create a file
2. Edit a file
3. Show the content of a file
4. Delete a file
5. Exit
```
#### Option Descriptions
- **1: Create a file:** Enter a filename to create a new file.
- **2: Edit a file:** Enter the filename and input the content to append. Press Enter on an empty line to finish.
- **3: Show the content of a file:** Enter the filename to display its content.
- **4: Delete a file:** Enter the filename to delete it.
- **5: Exit:** Quit the program.

## Example Usage
```
---------------------------------------------------Keep Notes---------------------------------------------------
Options:
1. Create a file
2. Edit a file
3. Show the content of a file
4. Delete a file
5. Exit
Enter your choice: 1
Enter the name of the file to create: example.txt
File created successfully.
```

## Project Structure
```
keep_notes.cpp  # Main source code file
```

## Code Breakdown
### Main Functions
- **createFile():** Handles file creation.
- **editFile():** Appends content to existing files.
- **showFile():** Displays the content of a file.
- **deleteFile():** Deletes a specified file.

## Requirements
- C++ compiler (e.g., `g++`)
- Compatible with Windows, macOS, and Linux

## Compilation and Execution
To compile and execute the project on different platforms:
### Windows (using MinGW)
```bash
g++ keep_notes.cpp -o keep_notes.exe
keep_notes.exe
```
### Linux and macOS
```bash
g++ keep_notes.cpp -o keep_notes
./keep_notes
```

## Error Handling
The program includes basic error handling for:
- File creation errors
- File read/write errors
- Invalid file deletion attempts

## Contribution
Contributions are welcome! If you'd like to improve this project, feel free to fork the repository and submit a pull request.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## Author
- **Bilal Qadeer** (bilalqadeer347@gmail.com)

## Acknowledgments
- Inspired by the need to learn file I/O operations in C++.

