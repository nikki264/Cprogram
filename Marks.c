//4.  if (marks >= 33 && marks < 35) Case 2 
#include <stdio.h> 
int marks;  // global data – everyone can change this 
void enterMarks() { 
    printf("Enter marks: "); 
    scanf("%d", &marks); 
} 
void giveGraceMarks() { 
    if (marks >= 33 && marks < 35) { 
        marks = marks + 5;   // grace only if between 33 and 34 
    } 
} 
void applyPenalty() { 
    // late submission of assignment 
    marks = marks - 10; 
} 
void printResult() { 
    printf("Final marks = %d\n", marks); 
} 
int main() { 
    enterMarks();      // marks = 34 
    applyPenalty();    // 34 - 10 = 24 
    giveGraceMarks();  // condition: marks >= 33 && marks < 35? NO (marks = 24) 
    printResult();     // 24 
    return 0; 
} 
/*Output: 
Enter marks: 34 
Final marks = 24 
 -------------------------------- 
Process exited after 6.064 seconds with return value 0 
Press any key to continue . . .*
