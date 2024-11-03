# Changing Operation

This folder documents the process of modifying a binary file to change an arithmetic operation. In this example, we reverse-engineer a program that originally used an `add` function to perform addition, and we modify it to use a `sub` function to perform subtraction instead. This simple change demonstrates how minor modifications at the binary level can alter a program's functionality.

## Objective

The goal of this exercise is to:

- Understand how to locate and analyze specific functions in a binary using Ghidra.
- Modify the binary to replace an `add` operation with a `sub` operation.
- Verify and document the changes to understand their impact on program behavior.

## Tools Used

- **Ghidra**: A software reverse engineering tool for analyzing binary files and making modifications.

## Steps

### 1. Analyze the Original Binary

1. **Load the Binary in Ghidra**: Import the binary file (e.g., `testbinary.exe`) into Ghidra and allow it to run auto-analysis.
2. **Locate the `add` Function**: Use the **Functions** or **Symbol Tree** in Ghidra to identify where the `add` function is located.
3. **Examine Function Parameters**: Determine where the `add` function is called and which registers or variables it operates on.

### 2. Modify the Function

1. **Patch the Operation**: Right-click on the `add` instruction and select **Patch Instruction**. Change `add` to `sub`.
   - Example: If the original instruction was `add eax, ebx`, change it to `sub eax, ebx`.
2. **Save Changes**: After patching, export the modified binary by choosing **File > Export Program** and selecting **Original File** as the format.

### 3. Test the Modified Binary

1. Run the modified binary (e.g., `testbinary_modified.exe`) to observe the changes.
2. Verify that the program now performs subtraction instead of addition. For example, if the original program added `5 + 10`, the modified version should now perform `5 - 10`.

## Results

The change successfully altered the program's behavior from addition to subtraction. This demonstrates the power of binary modification to directly influence a program's logic.

### Original Behavior

- Function: `add`
- Operation: Adds two numbers and returns the sum.
- Example Output: `Result: 15` (from `5 + 10`)

### Modified Behavior

- Function: `sub`
- Operation: Subtracts one number from another and returns the difference.
- Example Output: `Result: -5` (from `5 - 10`)
