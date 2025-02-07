#include <iostream> 
#include <vector> 
#include <string> 
#include <unordered_map>
#include <algorithm> 

using namespace std; 

typedef long long int lli ; 

unordered_map< char , int > code ; 
unordered_map< int , char > rcode ; 

// converts any given number in decimal form: 
string _2decimal( string number , int base ){ 
    lli temp = 1 ; 
    lli decimal = 0 ; 
    reverse( number.begin() , number.end() ) ; 
    for( auto c : number ){
        decimal += temp * ( code[c] ) ; 
        temp *= base ; 
    }
    return to_string( decimal ) ;
}

string decimal2base( string number , int base ){ 
    lli decimal = stoi( number ) ; 
    number = "" ;
    while( decimal || number == "" ){ 
        number.push_back(rcode[decimal%base]) ; 
        decimal /= base ; 
    }
    reverse( number.begin() , number.end() ) ; 
    return number ; 
}

string d2b( string number ){ 
    return decimal2base( number , 2 ) ;
}

string h2b( string number ){ 
    number = _2decimal( number , 16 ) ; 
    return decimal2base( number , 2 ) ; 
}

string o2h( string number ){ 
    number = _2decimal( number , 8 ) ; 
    return decimal2base( number , 16 ) ; 
}

string h2o( string number ){ 
    number = _2decimal( number , 16) ; 
    return decimal2base( number , 8 ) ; 
}

int main( ){ 

    for( auto i = 0 ; i < 10 ; i ++ ){ 
         code['0'+i] = i ; 
         rcode[i] = '0' + i  ; 
    }
    for( auto i = 0 ; i < 6 ; i ++ ){ 
        code['A'+i] = i + 10 ;  
        rcode[i+10] = i + 'A' ; 
    }

    cout << "---------------------" << endl ; 
    cout << "Decimal: " << "1209" << endl ; 
    cout << "Binary: " << decimal2base( "1209" , 2 ) << endl ; 
    cout << "Hexa: " << decimal2base( "1209" , 16 ) << endl ;
    cout << "Octal: " <<decimal2base( "1209" , 8  ) << endl ; 
    cout << "---------------------" << endl ; 

    cout << "d2b " << d2b("1209") << endl       ; 
    cout << "h2b " << h2b("4B9") << endl        ; 
    cout << "o2h " << o2h("2271") << endl       ; 
    cout << "h2o " << h2o("4B9") << endl        ;  
    cout << "---------------------" << endl     ; 

    return 0 ; 
}