//
// This is a header file for data types
//

#ifndef DATA_TYPE_H
#define DATA_TYPE_H

typedef unsigned 	   user_type;
typedef unsigned short movie_type;
typedef unsigned short time_type;
typedef unsigned char  rating_type;

struct data_point
{	
	user_type user;
	movie_type movie;
	time_type timestamp;
	rating_type rating;
};

#define NUM_USERS 458293
#define NUM_MOVIES 17710
#define NUM_DATES 2243

#endif

