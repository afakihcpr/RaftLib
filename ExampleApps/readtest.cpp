#include <cstdlib>
#include <iostream>
#include <raft>

#include "fileio.tcc"
#include "print.tcc"

int
main( int argc, char **argv )
{
   Map map;
   map.link( new filereader<filechunk< 16 >,false>( "ecoli.txt" ), 
             new Print< filechunk< 16 > >() );

   map.exe();
   return( EXIT_SUCCESS );
};