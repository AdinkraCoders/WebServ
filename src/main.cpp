# include <iostream>

# include "ConfigParser.hpp"
# include "ServerManager.hpp"
# include "Server.hpp"

//TODO error handling
//TODO changing namespace?
//TODO adding cgi
//TODO adding timeout on connections
//TODO adding a logger class?
//TODO adding signal handlers?
//TODO checking leaks
int main( int argc, char **argv )
{
	typedef std::vector<http::Server> vector_of_servers;
	typedef http::ConfigParser		parser_object;

	if (argc != 2)
		http::exit_with_error("Not Enough CMD Parameters!");

	vector_of_servers				servers;
	parser_object					parser(servers, argv[1]);
	http::ServerManager				master;
	master.setupServers(servers);			// servermanager is creating a duplicate instance of servers
	master.runServers();
	

	return (0);
}

