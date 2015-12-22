#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
class Randomquestions
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
																									                Randomquestions quiz;
																											            std::cout << questions[quiz.show( counter - 1 )];

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
                                                                std::cout<<attemps<<"  attemps\n";
                                                                //return;
                                                                }
																																																																																			};
                                                        /*int main()
                                                        {
                                                            quiz q;
                                                            q.takequiz();
                                                            return 0;
                                                        }*/

