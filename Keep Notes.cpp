#include <iostream>
#include <fstream>

using namespace std;

const int arrLength = 100;

void createFile();
void editFile(); 
void showFile();
void deleteFile(); 

int main() 
{
	cout<<"---------------------------------------------------Keep Notes---------------------------------------------------";
    char choice;
    do 
	{
        cout << "\nOptions:\n";
        cout << "1. Create a file\n";
        cout << "2. Edit a file\n";
        cout << "3. Show the content of a file\n";
        cout << "4. Delete a file\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case '1':
                createFile();
                break;
            case '2':
                editFile();
                break;
            case '3':
                showFile();
                break;
            case '4':
                deleteFile();
                break;
            case '5':
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != '5');

    return 0;
}

void createFile() 
{
    char filename[arrLength];
    cout << "Enter the name of the file to create: ";
    cin.ignore();
    cin.getline(filename, arrLength);

    ofstream file(filename);
    if (file.is_open()) 
	{
        cout << "File created successfully.\n";
        file.close();
    } else 
	{
        cout << "Error creating the file.\n";
    }
}

void editFile() 
{
    char filename[arrLength];
    cout << "Enter the name of the file to edit: ";
    cin.ignore();
    cin.getline(filename, arrLength);

    ofstream file(filename, ios::app);
    if (file.is_open()) 
	{
        char content[arrLength];
        cout << "Enter the content to add to the file (Press Enter on an empty line to finish):\n";
        do 
		{
            cin.getline(content, arrLength);
            file << content << endl;
        } while (content[0] != '\0');
        cout << "File edited successfully.\n";
        file.close();
    } else 
	{
        cout << "Error opening the file for editing.\n";
    }
}

void deleteFile() 
{
    char filename[arrLength];
    cout << "Enter the name of the file to delete: ";
    cin.ignore();
    cin.getline(filename, arrLength);

    if (remove(filename) == 0) 
	{
        cout << "File deleted successfully.\n";
    } else 
	{
        cout << "Error deleting the file.\n";
    }
}

void showFile() 
{
    char filename[arrLength];
    cout << "Enter the name of the file to display: ";
    cin.ignore();
    cin.getline(filename, arrLength);

    ifstream file(filename);
    if (file.is_open()) 
	{
        char content[arrLength];
        cout << "Content of the file:\n";
        while (file.getline(content, arrLength)) 
		{
            cout << content << endl;
        }
        file.close();
    } else 
	{
        cout << "Error opening the file.\n";
    }
}

