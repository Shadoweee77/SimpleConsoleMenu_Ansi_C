#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Remove the annoying _CRT_SECURE_NO_WARNIGNS flag.
//https://stackoverflow.com/questions/16883037/remove-secure-warnings-crt-secure-no-warnings-from-projects-by-default-in-vis

//Number of functions that You are able to choose.
int const number_of_functions = 8;
//Array with "number_of_functions" value of elements.
char function_selector_char[8];

void  clear_function_selector_char() {
	for (int i = 0; i < number_of_functions; i++)
	{
		function_selector_char[i] = ' ';
		//Symbol to represent unselected options.
	}
}

//Put function logic inside this section of the code! The amount of functions is equal to the value of "number_of_functions".

void function_1() {
	//EXAMPLE funtion to show You how to stop the while loop while executing funtions.

	//LOGIC GOES HERE
	printf("\n\nHello world!");


	printf("\n\nPress ENTER to continue!");
	char trash;
	trash = getchar();
};

void function_2() {};

void function_3() {};

void function_4() {};

void function_5() {};

void function_6() {};

void function_7() {};

void function_8() {};



//This is the menu that is printed into the console. You need to MANUALLY add as many funtions as You specified above - in this case 8.
//Template:
//printf("[%c] Function NUMBER\n", function_selector_char[NUMBER-1]);

//Be sure to change the displayed funtion names in the menu below.
//You can also change the ASCII art. Note! - if You want to display "\" symbol You need to type "\\". http://patorjk.com/software/taag/#p=display&f=Big&t=C%20Menu

void print_menu() {
	system("cls");
	printf("   _____   __  __                  \n");
	printf("  / ____| |  \\/  |                 \n");
	printf(" | |      | \\  / | ___ _ __  _   _ \n");
	printf(" | |      | |\\/| |/ _ \\ '_ \\| | | |\n");
	printf(" | |____  | |  | |  __/ | | | |_| |\n");
	printf(" \\_____|  |_|  |_|\\___|_| |_|\\__,_|\n\n");
	printf("[%c] Function 1\n", function_selector_char[0]);
	printf("[%c] Function 2\n", function_selector_char[1]);
	printf("[%c] Function 3\n", function_selector_char[2]);
	printf("[%c] Function 4\n", function_selector_char[3]);
	printf("[%c] Function 5\n", function_selector_char[4]);
	printf("[%c] Function 6\n", function_selector_char[5]);
	printf("[%c] Function 7\n", function_selector_char[6]);
	printf("[%c] Function 8\n", function_selector_char[7]);
	printf("\nNavigation: Arrows Up and down, ENTER to confirm.\n\n");
}

int main() {

	//If the braker is set to 0 it will stop the execution of the menu. Maybe it comes handy to You :)
	int braker = 1;


	print_menu();
	int current_selected_function = 0;
	do {
		time_t current_time = time(NULL);
		char* current_time_str = ctime(&current_time);
		current_time_str[strlen(current_time_str) - 1] = '\0';
		printf("\rDate: %s", current_time_str);
		char the_selector;
		if (_kbhit()) {
			the_selector = _getch();
			switch (the_selector)
			{
			case -32://Arrows take up two bytes of data - the "-32" value is the first one.
				the_selector = _getch();
				if (the_selector == 72)//Up arrow
				{
					current_selected_function--;
				}
				else if (the_selector == 80)//Down arrow
				{
					current_selected_function++;
				}
				break;
			case 13:
				switch (current_selected_function)
				{

					//========================================== <--------------- Start of the section to be edited!


						//This is where You put Your functions.
						//If You need more functions You also need to add the missing switch cases.
						//Template:
						//case NUMBER-1:
						//function_NUMBER();
						//break;


				case 0:
					function_1();
					break;

				case 1:
					function_2();
					break;

				case 2:
					function_3();
					break;

				case 3:
					function_4();
					break;

				case 4:
					function_5();
					break;

				case 5:
					function_6();
					break;

				case 6:
					function_7();
					break;

				case 7:
					function_8();
					break;
				}
				break;
			}
			//========================================== <--------------- End of the section to be edited!









			//This is some crappy logic. Don't worry about it. You don't have to change anything below this point.



			if (current_selected_function > number_of_functions - 1) current_selected_function -= number_of_functions;
			if (current_selected_function < 0) current_selected_function += number_of_functions;
			if (current_selected_function > number_of_functions - 1) current_selected_function -= number_of_functions;
			if (current_selected_function < 0) current_selected_function += number_of_functions;
			switch (current_selected_function)
			{
			case 0:
				clear_function_selector_char();
				function_selector_char[0] = 'X';
				break;
			case 1:
				clear_function_selector_char();
				function_selector_char[1] = 'X';
				break;
			case 2:
				clear_function_selector_char();
				function_selector_char[2] = 'X';
				break;
			case 3:
				clear_function_selector_char();
				function_selector_char[3] = 'X';
				break;
			case 4:
				clear_function_selector_char();
				function_selector_char[4] = 'X';
				break;
			case 5:
				clear_function_selector_char();
				function_selector_char[5] = 'X';
				break;
			case 6:
				clear_function_selector_char();
				function_selector_char[6] = 'X';
				break;
			case 7:
				clear_function_selector_char();
				function_selector_char[7] = 'X';
				break;
			}
			print_menu();
		}


	} while (braker != 0);

}

//Menu created by Shadoweee - https://github.com/Shadoweee77/SimpleConsoleMenu_Ansi_C
