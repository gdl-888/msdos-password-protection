#define printf cprintf
#define setcolor(txt, bck) textcolor(txt);textbackground(bck)
#define elseif else if
#define then {
#define rnd rand()%
#define cls clrscr();
#define randomize srand(time(0));
#define len strlen
#define cmp !strcmp
#define puts(x, y, s) gotoxy(x,y);puts(s)
#define function

void function getpw(char* dest)
{
	/* https://stackoverflow.com/questions/3969871/using-getchar-on-c-gets-the-enter-after-input */
	int idx = 0;
	int chr;
	
	strcpy(dest, "");
	
	do {
		chr = getch();
		putchar('*');
		dest[idx++] = chr;
		if(idx >= 32) break;
	} while(chr != '\n' && chr != -1);
	
	return;
}

function main()
{
	char password[32] = "your password goes here", input[32] = "";
	int count;

	puts(20, 2, "Welcome!");
	puts(20, 3, "Input password to continue.\n");

	puts(20, 4, "??????????????????????????????????");
	puts(20, 5, "?								?");
	puts(20, 6, "??????????????????????????????????");
	
	gotoxy(20, 6);
	
	while(1)
		{
			getpw(input);
			
			if(cmp(input, password))
				{
					system("C:\\DOS\\CMD.COM");
				}
			else
				{
					puts(20, 8, "Wrong password!");
					count++;
					
					if(count >= 3)
						{
							puts(20, 9, "You entered a wrong password too many times.");
							puts(20, 10, "You are not able to enter a password anymore in this session.");
							while(1);
						}
					else
						{
							puts(20, 6, "                               ");
							gotoxy(20, 6);
						}
				}	
		}
}
