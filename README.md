# Date Weekday Calculator

This repository contains two C programs (`date.c` and `dateVer2.c`) that calculate the day of the week for a given date (in DD MM YYYY format).

## Files

### 1. `date.c`

- **Description**: This program determines the day of the week for a given date using conditional statements and leap year checks. The total number of days in the year is calculated by manually adjusting for leap years and months.
- **How it works**:
  - Takes user input for day, month, and year.
  - Calculates total days passed in the year.
  - Adjusts for leap years if applicable.
  - Computes the day of the week based on the total days and leap years.

### 2. `dateVer2.c`

- **Description**: This is an optimized version of the `date.c` program that simplifies the calculation using an array to store the cumulative number of days in each month. The leap year adjustment is handled by a separate function.
- **Improvements**:
  - Uses a helper function `isLeapYear()` to determine leap years.
  - Utilizes an array to calculate total days more efficiently.
  - Implements a `switch` statement for determining the day of the week.

## Usage

To compile and run either program:

1. **Clone the repository**:
   ```bash
   git clone <[https://github.com/MaheerJishan3/DayFinder]>
   ```
2. **Navigate to the directory**:
   ```bash
   cd <repo-directory>
   ```
3. **Compile the program**:
   For `date.c`:
   ```bash
   gcc -o date date.c
   ```
   For `dateVer2.c`:
   ```bash
   gcc -o dateVer2 dateVer2.c
   ```
4. **Run the program**:
   ```bash
   ./date
   ```
   or
   ```bash
   ./dateVer2
   ```

5. **Input the date** in `DD MM YYYY` format as prompted by the program.

## Example

For a date input of `15 08 2023` (August 15, 2023):

The output for both programs will display:
```
It was Tuesday on 15/8/2023
```
