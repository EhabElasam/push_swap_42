# Push_Swap
## Project Overview

The "Push_Swap" project is a challenging exercise that involves sorting data on a stack using a limited set of instructions. The objective is to sort the data using the smallest number of actions possible. This requires manipulating various types of algorithms to choose the most optimized solution for data sorting.
Installation

To use this project, clone the repository and compile the files using Make.

    git clone git@github.com:EhabElasam/push_swap_42.git
    
    cd push_swap
    
    make

# Features

main(): Initializes and starts the sorting process, processes input arguments, initializes data structures, and outputs the sequence of operations.
validate_input(): Validates that all inputs are integers and checks for duplicates.
init_stacks(): Initializes the stacks with input values.
sort_stack(): Contains the logic to choose and execute the sorting algorithm using stack operations.
Stack Operations:
    Swap: swap_a(), swap_b(), swap_both()
    Push: push_a(), push_b()
    Rotate: rotate_a(), rotate_b(), rotate_both()
    Reverse Rotate: reverse_rotate_a(), reverse_rotate_b(), reverse_rotate_both()
print_operations(): Outputs the operations performed to sort the stack.
cleanup(): Frees up resources and allocated memory to prevent memory leaks.
Error Handling: handle_error() manages and reports errors during program execution.

# Usage

After installation, you can run the program as follows:

    ./push_swap <sequence of numbers>

Example:

    ./push_swap 4 67 3 87 23

The program will output a list of instructions needed to sort the sequence of numbers.

# Contributing

Contributions to the project are welcome. You can report bugs, submit pull requests, or suggest improvement
