##Aim: To study and implement C++ decision making statements Loops

##Apparatus-VSCode/Programiz

##Theory on Loops
📌 What is a Loop?
A loop is a control structure that repeats a block of code multiple times, depending on a condition.

You use loops when:

You want to repeat something multiple times.

You want to run the same set of instructions for different values.

##🔄 Types of Loops
1. For Loop
Used when you know in advance how many times you want to run the loop.

💡 Syntax (C/C++):
for(initialization; condition; update){
    // code to execute
}
🔹 Example:
for(int i = 0; i < 5; i++){
    cout << i << " ";
}
// Output: 0 1 2 3 4
2. While Loop
Used when you don’t know exactly how many times to run — loop continues as long as the condition is true.

💡 Syntax:
cpp
Copy
Edit
while(condition){
    // code to execute
}
🔹 Example:
int i = 0;
while(i < 5){
    cout << i << " ";
    i++;
}
// Output: 0 1 2 3 4
3. Do-While Loop
Runs the code at least once, even if the condition is false.
do {
    // code to execute
} while(condition);
🔹 Example:
int i = 0;
do {
    cout << i << " ";
    i++;
} while(i < 5);
// Output: 0 1 2 3 4
🧠 Key Concepts
✅ Initialization:
Starting point of the loop. Usually a counter variable like int i = 0.

✅ Condition:
The loop runs while this is true. As soon as it’s false, the loop stops.

✅ Update:
Changes the counter to eventually stop the loop (like i++).

##Program on patterns
🔁 Structure of Pattern Printing
✅ 1. Outer Loop – Controls Rows
The first (outer) loop is responsible for how many lines (rows) will be printed. Each iteration of this loop prints one row of the pattern.

cpp
Copy
Edit
for(int i = 1; i <= n; i++) {
    // Inner loop goes here
}
✅ 2. Inner Loop – Controls Columns
The second (inner) loop runs inside the outer loop. It controls what to print in each row — stars, numbers, letters, etc.

for(int j = 1; j <= i; j++) {
    cout << "* ";
}
🔄 Adding More Control – Printing Spaces
To make flipped or right-aligned triangles and pyramids, a third loop is sometimes added before the inner loop. This new loop prints spaces to shift the pattern to the right.

🧱 Example – Right-Aligned Triangle:

for(int i = 1; i <= n; i++) {
    for(int space = 1; space <= n - i; space++) {
        cout << " "; // space loop
    }
    for(int j = 1; j <= i; j++) {
        cout << "* "; // star loop
    }
    cout << endl;
}
Here:

First loop prints n rows.

Second loop prints spaces (decreasing as rows increase).

Third loop prints stars (increasing per row).



##Conclusion


