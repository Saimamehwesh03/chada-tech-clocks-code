# chada-tech-clocks-code

## Project Summary

For this project, I developed the Chada Tech Clock Program using C++. The purpose of the program was to display both a 12-hour clock and a 24-hour clock simultaneously while allowing the user to add hours, minutes, and seconds through a menu-driven interface. The project solved the problem of keeping two clock formats synchronized and provided users with an easy way to update and view time in both formats.

## What I Did Particularly Well

One thing I did particularly well was creating separate functions for each task, such as displaying the clocks, displaying the menu, and updating the time. This modular design made the code easier to read, test, and maintain. I also successfully implemented time calculations that correctly handled transitions between seconds, minutes, and hours.

## Areas for Improvement

One area where I could improve the program would be input validation. Currently, if a user enters a non-numeric value, the program may not function as expected. Adding stronger error handling would make the program more reliable and user-friendly. I could also improve the formatting and expand the program to allow users to set a custom starting time.

## Challenges and Solutions

The most challenging part of the project was ensuring that changes to seconds, minutes, and hours were handled correctly when values reached their limits. For example, when seconds reached 60, they needed to reset to zero and increment the minutes. I overcame this challenge by breaking the logic into smaller functions and testing different scenarios to verify that the clock updated correctly. Course resources, online C++ documentation, and debugging techniques were valuable tools throughout the project.

## Transferable Skills

This project helped strengthen my skills in C++ programming, function design, problem-solving, debugging, and working with control structures. I also gained experience using modular programming techniques, which will be useful in future software development projects and coursework.

## Maintainability, Readability, and Adaptability

I made the program maintainable and readable by using descriptive function names, comments, consistent formatting, and separating tasks into individual functions. This modular approach makes the code easier to understand and modify. If new features were added in the future, such as allowing users to set the time manually or adding a real-time clock, the existing structure would support those enhancements with minimal changes.
