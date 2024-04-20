#include <stdio.h>
#define LEN 25

struct player 
{
	int rank;
	char name[LEN];
	int gamesplayed;
};

int main()
{
	FILE *fp;
	struct player pls[4] = { {7, "mahendra Singh Dhoni", 567},
		                 {18,"Virat Kohli",534},
				 {45, "RTohit Sharma",249},
				 {3, "SureshRaina",546}
	};
	fp = fopen("players.rec","wb");
	for ( int i= 0;i<4;i++)
	{
		fwrite(pls[i], sizeof(struct player), 1,fp);
	}
	fclose(fp);
	return 0;
}

