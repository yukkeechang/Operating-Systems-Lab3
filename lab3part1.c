//
//  main.c
//  Lab3a
//
//  Created by Yukkee chang on 4/18/19.
//  Copyright © 2019 Yukkee chang. All rights reserved.
//


#include <stdio.h>
#include <unistd.h>

int main()
{
    int child_status = 0;
    // Create child process
    child = fork();
    //Make parent wait
    wait(NULL);
    if (child < 0) {
        perror("child process in forking");
    }
    // Print child PID and execute date
    else if (child == 0) {
        execl("/bin/date", NULL, NULL);
        printf("Child PID is: %d\n", getpid());
        perror("execl");
    }
    return 0;
}
