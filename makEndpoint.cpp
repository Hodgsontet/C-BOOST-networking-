#include<boost/asio.hpp>
#include <bits/stdc++.h>


using namespace std;
using namespace boost;
int main(int argc, char const *argv[])
{
	//****************client end point
	system::error_code ec;
	// create an endpoint
	//auto will probably resolve to type boost::asio::ip::address
	auto  address = asio::ip::address::from_string("127.0.0.1", ec);

	// check that ec isnt throwing an exception ill ignore for now
	/*  endpoint can be made in three ways
    1. ip::tcp::endpoint()
    2. ip::tcp::endpoint(protocol,port) used by servers to specify protocol  and port
    3. ip::tcp::endpoint(addr,port) used by clients to connect to a spot
	we can also use dns resolver to resolve a website to an ip well looka t that later

	*/

	auto port = 80;

	 asio::ip::tcp::endpoint ep(address, port);
 cout << ep.address().to_string() << ":" << ep.port(); 
 //<< "/" << ep.protocol() << '\n';
	 //******************server endpoint ***********
     // endpoint becomes generic any
	return 0;
}