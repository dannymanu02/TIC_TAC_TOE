#include<stdio.h>
#include<stdlib.h>

char x[3][3], player1[20],player2[20];
int i,j,box,m=1;

instructions()
            { printf("the game is tic tac toe and only two players are allowed to take part in this game\n");
              printf("the person with the straight allignment of their respective pieces in any direction wins\n");
              printf("player 1 has to play with 'X' and the player 2 has to play with 'O'\n");
              printf("a player gets his/her chance in alternative manner and have to put their pieces in their respective box\n");
              printf("the outlet of a tic tac toe board looks like this\n");
              printf("\t\t\t 1 | 2 | 3 \t\t\t\n");
              printf("\t\t\t ---------- \t\t\t\n");
              printf("\t\t\t 4 | 5 | 6 \t\t\t\n");
              printf("\t\t\t ---------- \t\t\t\n");
              printf("\t\t\t 7 | 8 | 9 \t\t\t\n");
              printf("enter the number to enter the piece in the respective box\n");
              printf("NOTE:THESE INSTRUCTIONS ARE A ONE TIME INSTRUCTIONS ONLY AND WILL NOT BE DISPLAYED LATER ON IN THE GAME\n\n");
			}
			
main()
     { instructions();
       
       for(i=0;i<3;i++)
          { for(j=0;j<3;j++)
                { x[i][j]=' ';
				}
		  }
		  
		  printf("\t\t\t %c | %c | %c \t\t\t\n",x[0][0],x[0][1],x[0][2]);
          printf("\t\t\t ---------- \t\t\t\n");
          printf("\t\t\t %c | %c | %c \t\t\t\n",x[1][0],x[1][1],x[1][2]);
          printf("\t\t\t ---------- \t\t\t\n");
          printf("\t\t\t %c | %c | %c \t\t\t\n",x[2][0],x[2][1],x[2][2]);

		  
        printf("enter the name of palyer 1");
        fgets(player1,21,stdin);
        
        printf("enter the name of player 2");
        fgets(player2,21,stdin);
        
        chance();
    
	 }
	 
chance()
       { 
	   if(m==6||m==7||m==8||m==9)  
		 { if((x[0][0]==x[0][1]&&x[0][1]==x[0][2])||(x[1][0]==x[1][1]&&x[1][1]==x[1][2])||(x[2][0]==x[2][1]&&x[2][1]==x[2][2])||(x[0][0]==x[1][1]&&x[1][1]==x[2][2])||(x[2][0]==x[1][1]&&x[1][1]==x[0][2])||(x[0][0]==x[1][0]&&x[1][0]==x[2][0])||(x[0][1]==x[1][1]&&x[1][1]==x[2][1])||(x[0][2]==x[1][2]&&x[1][2]==x[2][2]))
            { if(m%2==0)
                { printf("%s has won\n",player1);
                  exit(0);
				}
				
			  else
			      { printf("%s has won\n",player2);
			        exit(0);
				  }
			}
	      }
	   
	   while(m<=9)
              { if(m%2==0)
                  {  
				    p2();
				  }
				  
				else
				    { 
					  p1();
					}
			  }
		 
		 if(m==10)
		    { printf("the match has ended in a draw");
		      exit(0);
		    } 
	   }
	   
p1()
        { printf("player 1's turn\n");
          printf("enter your box\n");
          scanf("%d",&box);
          
          if(box==1)
            { if(x[0][0]=='X'||x[0][0]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[0][0]='X';
                   display();
			     }
			
		   }
		   
          else if(box==2)
            { if(x[0][1]=='X'||x[0][1]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[0][1]='X';
                   display();
			     }
			
		   }
                 
				 
		  else if(box==3)
            { if(x[0][2]=='X'||x[0][2]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[0][2]='X';
                   display();
			     }
			
		   }
		  
				 
		  else if(box==4)
            { if(x[1][0]=='X'||x[1][0]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[1][0]='X';
                   display();
			     }
			
		   }

				 
	       else if(box==5)
            { if(x[1][1]=='X'||x[1][1]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[1][1]='X';
                   display();
			     }
			
		   }

				 
		   else if(box==6)
            { if(x[1][2]=='X'||x[1][2]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[1][2]='X';
                   display();
			     }
			
		   }

				 
		   else if(box==7)
            { if(x[2][0]=='X'||x[2][0]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[2][0]='X';
                   display();
			     }
			
		   }

				 
			else if(box==8)
            { if(x[2][1]=='X'||x[2][1]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[2][1]='X';
                   display();
			     }
			
		   }
			
				 
		    else if(box==9)
            { if(x[2][2]=='X'||x[2][2]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p1();
				}
			 else	
			     { x[2][2]='X';
                   display();
			     }
			
		   }

				 
		    else
			    { printf("invalid option, choose number only from 1 to 9\n");
			      p1();
				}	 		 
		}
		
p2()
        { printf("player 2's turn\n");
          printf("enter your box\n");
          scanf("%d",&box);
          
          if(box==1)
            { if(x[0][0]=='X'||x[0][0]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[0][0]='O';
                   display();
			     }
			
		   }
		   
          else if(box==2)
            { if(x[0][1]=='X'||x[0][1]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[0][1]='O';
                   display();
			     }
			
		   }
                 
				 
		  else if(box==3)
            { if(x[0][2]=='X'||x[0][2]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[0][2]='O';
                   display();
			     }
			
		   }
		  
				 
		  else if(box==4)
            { if(x[1][0]=='X'||x[1][0]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[1][0]='O';
                   display();
			     }
			
		   }

				 
	       else if(box==5)
            { if(x[1][1]=='X'||x[1][1]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[1][1]='O';
                   display();
			     }
			
		   }

				 
		   else if(box==6)
            { if(x[1][2]=='X'||x[1][2]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[1][2]='O';
                   display();
			     }
			
		   }

				 
		   else if(box==7)
            { if(x[2][0]=='X'||x[2][0]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[2][0]='O';
                   display();
			     }
			
		   }

				 
			else if(box==8)
            { if(x[2][1]=='X'||x[2][1]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[2][1]='O';
                   display();
			     }
			
		   }
			
				 
		    else if(box==9)
            { if(x[2][2]=='X'||x[2][2]=='O')
                { printf("Illegal move, piece cannot be placed in this position\n");
                  p2();
				}
			 else	
			     { x[2][2]='O';
                   display();
			     }
			
		   }

				 
		    else
			    { printf("invalid option, choose number only from 1 to 9\n");
			      p2();
				}	 		 
		}
		
display()
        { printf("the table after your choice\n");
          printf("\t\t\t %c | %c | %c \t\t\t\n",x[0][0],x[0][1],x[0][2]);
          printf("\t\t\t ---------- \t\t\t\n");
          printf("\t\t\t %c | %c | %c \t\t\t\n",x[1][0],x[1][1],x[1][2]);
          printf("\t\t\t ---------- \t\t\t\n");
          printf("\t\t\t %c | %c | %c \t\t\t\n",x[2][0],x[2][1],x[2][2]);
          m=m+1;
          chance();
		}
