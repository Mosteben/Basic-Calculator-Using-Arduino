# Basic Calculator Using Arduino

This project demonstrates a simple calculator built using an Arduino microcontroller. The calculator can perform basic arithmetic operations such as addition, subtraction, multiplication, and division. 

## Components Required

- **Arduino Board**: Any compatible Arduino board (e.g., Arduino Uno, Nano, etc.)
- **4x4 Matrix Keypad**: To input numbers and operations.
- **16x2 LCD Display**: To display the input and output results.
- **Breadboard and Jumper Wires**: For connecting components.

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)  <!-- Replace with the actual circuit diagram image -->

## Libraries Used

The following libraries are used in this project:

- **Keypad**: For handling input from the 4x4 matrix keypad.
- **LiquidCrystal**: For controlling the 16x2 LCD display.

Make sure to install these libraries via the Arduino Library Manager before uploading the code.

## Code Explanation

The main code for the calculator is found in the `calculator.ino` file. Below is a brief explanation of the code structure:

### Setup

1. **Include Libraries**: The required libraries are included at the top of the code.
2. **Define Constants**: Constants for the LCD pins and keypad layout are defined.
3. **Create Objects**: Objects for the keypad and LCD display are created.
4. **Initialize Variables**: Variables for storing the operands, operator, and result are initialized.

### Loop Function

1. **Display Welcome Message**: A welcome message is displayed on the LCD.
2. **Keypad Input Handling**: The loop continuously checks for key presses on the keypad. 
3. **Perform Calculations**: Based on the input, the program will perform the corresponding arithmetic operation.

### Functions

- **Basic Arithmetic Functions**: Functions for addition, subtraction, multiplication, and division are defined.
- **Display Function**: A function to display results on the LCD is implemented.

## Usage Instructions

1. **Wiring**: Connect the keypad and LCD display to the Arduino according to the circuit diagram.
2. **Upload Code**: Upload the `calculator.ino` file to your Arduino board using the Arduino IDE.
3. **Power Up**: Connect your Arduino to a power source.
4. **Input**: Use the keypad to input numbers and select operations. The results will be displayed on the LCD.

## Example Calculations

- To add two numbers, input the first number, press the `+` key, input the second number, and press the `=` key to see the result.
- Similarly, use `-`, `*`, and `/` for subtraction, multiplication, and division, respectively.

## Conclusion

This basic calculator demonstrates the use of Arduino for handling user input and performing calculations. You can expand the functionality by adding more operations or improving the user interface. 

## Future Improvements

- Implement error handling for division by zero.
- Add support for more complex mathematical operations (e.g., square root, power).
- Use a more advanced display or user interface for enhanced interaction.

## License

This project is open-source. Feel free to modify and distribute it under the MIT License.
