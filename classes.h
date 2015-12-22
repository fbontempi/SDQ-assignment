ing namespace std;
class Randomquestions1
{
public:
    int show(int p)
        {
	        srand( ( unsigned )time( 0 ) );
		        int random_integer;
			        random_integer = ( rand ( ) % p ) + 1;
				        return random_integer;
					    }
					    };

					    class Results_file
					    {
					    public:

					        void read_result()
						    {
						            std::ifstream read1 ("results.txt");
							            std::string line1;
								            std::vector < std::string > txtres;

									            while (getline(read1, line1, '\n'))
										            {
											                txtres.push_back( line1 );
													        }
														        read1.close();
															    }
															        void write_result(int r)
																    {
																            std::ofstream write ("results.txt",std::ios_base::app);
																	            write << r;
																		            write.close();
																			        }
																				};
																				class quiz
																				    {
																				        public:
																					    void takequiz()
																					        {

																						    std::ifstream read ("quiz_questions.txt");
																						        std::string line;
																							    std::vector < std::string > questions;
																							        char answer;
																								    int attemps =0;
																								        int counter = 0;
																									    int i,j;
																									        for(i=0; i<10; i++)
																										    {
																										            while (getline(read, line, '\n'))
																											            {
																												                questions.push_back( line );
																														            counter++;

																															            }
																																            read.close();
																																	            Randomquestions1 quiz1;
																																		            std::cout << questions[quiz1.show( counter - 1 )];

																																			            std::cin.get();
																																				            std::cout<<"\n";
																																					                for(j=0; j<3; j++)
																																							            {
																																								                    std::cin>>answer;
																																										                    if(answer == 'c' || answer == 'b' || answer == 'a')
																																												                    {
																																														                    if (answer == 'c')
																																																                    {
																																																		                        std::cout<<"correct\n";
																																																					                    j = 3;
																																																							                    }
																																																									                    if(answer != 'c')
																																																											                    {
																																																													                        attemps++;
																																																																					std::cout<<"wrong "<<attemps<<"\n";
																																																																									}
																																																																									                }
																																																																											                else
																																																																																	{
																																																																																					std::cout << "incorrect value\n";
																																																																																									}
																																																																																									            }
																																																																																										            }
																																																																																											            std::cout<<attemps<<"  attemps\n";

																																																																																												            Results_file t;
																																																																																													            t.write_result(attemps);
																																																																																														            //return;
																																																																																															        }
																																																																																																	};


																																																																																																	class Student
																																																																																																	{
																																																																																																	public:
																																																																																																	    void doquiz()
																																																																																																	        {
																																																																																																		        char ans;
																																																																																																			        std::cout<<"do quiz?\n";
																																																																																																				        std::cin>>ans;

																																																																																																					        if(ans == 'y'){
																																																																																																						            quiz q;
																																																																																																							                q.takequiz();
																																																																																																									        }
																																																																																																										        else{
																																																																																																											            Results_file r;
																																																																																																												                r.read_result();
																																																																																																														        }
																																																																																																															}
																																																																																																															};
																																																																																																															class Admin
																																																																																																															{
																																																																																																															    public:
																																																																																																															        void admin_fun()
																																																																																																																    {
																																																																																																																        char ans;
																																																																																																																	    cout << "would you like to look a results or edit quiz\n";
																																																																																																																	        cout << "type r for results\ntype q for edit quiz";
																																																																																																																		    cin >> ans;
																																																																																																																		        if(ans == 'q')
																																																																																																																			    {
																																																																																																																			            ofstream writeq ("quiz_questions.txt",ios_base::app);
																																																																																																																				            string q;
																																																																																																																					            writeq << q;
																																																																																																																						            writeq.close();

																																																																																																																							        }
																																																																																																																								    if(ans == 'r')
																																																																																																																								        {
																																																																																																																									        Results_file admin_r;
																																																																																																																										        admin_r.read_result();
																																																																																																																											    }
																																																																																																																											        else{cout << "error incorrect value\n";}
																																																																																																																												    }
																																																																																																																												    };
																																																																																																																												    class Login
																																																																																																																												    {
																																																																																																																												    public:

																																																																																																																												        void SendUsername()
																																																																																																																													    {
																																																																																																																													            //char Username[9];
																																																																																																																														            string Username;
																																																																																																																															            string d = "admin";
																																																																																																																																            string g = "student";
																																																																																																																																	            while(1)
																																																																																																																																		            {

																																																																																																																																			                cout << "Login as Student or Admin?\n" << endl;
																																																																																																																																					            cin >> Username;

																																																																																																																																						                if (Username == d)
																																																																																																																																								            {
																																																																																																																																									                    Admin add;
																																																																																																																																											                    add.admin_fun();
																																																																																																																																													                }

																																																																																																																																															            else if (Username == g)
																																																																																																																																																                {
																																																																																																																																																		                Student s;
																																																																																																																																																				                s.doquiz();
																																																																																																																																																						            }

																																																																																																																																																							                else
																																																																																																																																																									            {
																																																																																																																																																										                    cout << "Invalid User" << endl;

																																																																																																																																																												                    break;
																																																																																																																																																														                }

																																																																																																																																																																        }

																																																																																																																																																																	    }


																																																																																																																																																																	    };





