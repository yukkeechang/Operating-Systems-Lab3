//
//  main.c
//  Lab3a
//
//  Created by Yukkee chang on 4/18/19.
//  Copyright © 2019 Yukkee chang. All rights reserved.
//

// Write a program where a child is created to execute a command that shows all files (including hid- den files) in a directory with information such as permissions, owner, size, and when last modified.
// Use execvp(...).
// For the command to list directory contents with various options, refer the handout on Unix file
// system sent to you in the first class.
// Announce the successful forking of child process by displaying its PID.


#include <stdio.h>
#include <unistd.h>



int main()
{
    int child = 0;
    // Create child process
    child = fork();
    //Make parent wait
    wait(NULL);
    char * cmd = "ls";
    char * argv[4]; // array of argument list
    argv[0]= "ls"; //list files
    argv[1] = "-a"; //hidden files
    argv[2] = "-lah"; //size of files
    argv[3] = "-l"; //permission
    argv[4] = NULL; //end of argument


    if (child_status < 0) {
        perror("child process in forking");
    }

    // Print child PID and execute date
    else if (child == 0) {
        printf("test");
        //Can also use argv[0] as first parameter
        execvp(cmd, argv);
        perror("execl");
        //SUCCESS
        //ISSUE: execvp command works, however, printf statements before and after come out
        printf("Child PID is: %d\n", getpid());
    }

    return 0;
}
