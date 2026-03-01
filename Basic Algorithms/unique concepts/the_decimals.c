#include <stdio.h>

int main(){
    char c;
    for(int i = 0; i < 255; i++){  
        c = i;
        printf("%d -> %c \n", i, c);
    }
    return 0;
}

/*
The Unknown 31
Decimal,Character Code,Name,What it actually does 

Decimal,    Abbr,   Name,                                               "Real-World Use Case (The ""Expert"" View)"
---------------------------------------------------------------------------------------------------------------------------------------------------
0,          NUL,    Null Character,The most important in C.             Marks the end of a string (\0).
1,          SOH,    Start of Header,                                    Used in low-level networking to signal the start of data.
2,          STX,    Start of Text,                                      "Signals that the ""Header"" is over and the message is starting."
3,          ETX,    End of Text,                                        Signals the message is finished.
4,          EOT,    End of Transmission,                                "Tells the receiver ""I'm hanging up the phone now."""
5,          ENQ,    Enquiry,                                            "Used to ask the other computer: ""Are you there?"""
6,          ACK,    Acknowledge,                                        "The ""Thumbs Up"" signal in networking. ""I got your data!"""
7,          BEL,    Bell (\a),                                          Triggers a system beep. Used in CLI to alert the user.
8,          BS,     Backspace (\b),                                     Moves the cursor back one spot and deletes the character.
9,          HT,     Horizontal Tab (\t),                                Aligns text into columns (what happens when you hit 'Tab').
10,         LF,     Line Feed (\n),                                     The Newline. Moves the cursor down to the next row.
11,         VT,     Vertical Tab,                                       "Like a horizontal tab, but moves the cursor down several lines."
12,         FF,     Form Feed (\f),                                     Tells a printer to eject the current page and start a new one.
13,         CR,     Carriage Return (\r),                               Moves the cursor to the start of the current line.
14,         SO,     Shift Out,                                          Used to switch to an alternative character set (like Greek).
15,         SI,     Shift In,                                           Used to switch back to the standard character set.
16,         DLE,    Data Link Escape,                                   Changes the meaning of the characters that follow it.
17,         DC1,    Device Control 1,                                   "Often used as ""XON"" to resume data transmission."
18,         DC2,    Device Control 2,                                   Custom command for hardware (like a tape drive).
19,         DC3,    Device Control 3,                                   "Often used as ""XOFF"" to pause data transmission."
20,         DC4,    Device Control 4,                                   Another custom hardware command.
21,         NAK,    Neg. Acknowledge,                                   "The ""Thumbs Down."" ""That data was corrupted, send it again!"""
22,         SYN,    Synchronous Idle,                                   "Used to keep the connection ""alive"" when no data is being sent."
23,         ETB,    End of Trans. Block,                                "Marks the end of a specific ""block"" of data."
24,         CAN,    Cancel,                                             Tells the receiver to ignore the data just sent.
25,         EM,     End of Medium,                                      Signals that the storage (like a tape or disk) is full.
26,         SUB,    Substitute,                                         Used to replace a character that was corrupted during transmission.
27,         ESC,    Escape (\e),                                        "The ""Boss"" code. Starts a sequence to change text color or font."
28,         FS,     File Separator,                                     Used to separate different files in a single data stream.
29,         GS,     Group Separator,                                    Groups data within those files.
30,         RS,     Record Separator,                                   Separates individual records (like rows in a database).
31,         US,     Unit Separator,                                     The smallest separator (like columns in a row).

*/ 
