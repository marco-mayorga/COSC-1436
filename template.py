#!/usr/bin/env python3
from datetime import date
import os
# Creates C++ files with the top of the file filled out like prof wants.
"""
/*Name

Course

Date

Assignment Description*/
"""

# main function that handles most of the script


def main():
    #clears screen
    os.system('clear')

    # file name
    file_name = input("What is the file name: ")

    # My name
    my_name = "Marco Mayorga"

    # What Course this is
    course = "COSC-1436"

    # Gets todays date
    today = date.today()
    today_formatted = today.strftime("%B %d, %Y")

    # assignment description
    description = input("Copy and paste assignment description from d2l: ")

    # asks user what chapter folder to put file in
    while True:
        chapter_num = int(
            input("\nWhat chapter do i save the file to? (1-7): "))
        if chapter_num in range(1, 8):
            os.system('clear')
            print("File created!")
            break
        else:
            print("\nTry a number from 1-7: ")

    # changes to chapter folder
    save_where(chapter_num)

    # Creates cpp file
    with open(file_name + ".cpp", "w") as cppfile:
        # writes my info to the file
        cppfile.write(
            f"/*{my_name}\n\n{course}\n\n{today_formatted}\n\n{description}*/\n\n")
        # makes a basic cpp function under my info
        cppfile.write(
            "#include <iostream>\n\nusing namespace std;\n\nint main()\n{\n\tcout << \"Hello World\";\n\treturn 0;\n}")

# chooses directory to move into


def save_where(num):

    if num == 1:
        os.chdir("Chapter1")
    elif num == 2:
        os.chdir("Chapter2")
    elif num == 3:
        os.chdir("Chapter3")
    elif num == 4:
        os.chdir("Chapter4")
    elif num == 5:
        os.chdir("Chapter5")
    elif num == 6:
        os.chdir("Chapter6")
    elif num == 7:
        os.chdir("Chapter7")


main()
