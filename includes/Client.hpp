/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:06:35 by hrings            #+#    #+#             */
/*   Updated: 2023/03/09 19:25:39 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_HPP
# define CLIENT_HPP

# include "WebServer.hpp"
# include "Request.hpp"
# include "Response.hpp"
# include "Server.hpp"

// a class that stores information about a client
class Client
{
	public:
		Client();
		Client(const Client &copy);
		Client(http::Server &server);
		Client &operator=(const Client &assign);
		~Client();

		void	setSocket(int &fd);
        void	setAddress(sockaddr_in &addr);
        void	setServer(http::Server &server);
		http::Server getServer();
		int	getSocket();
		
		void buildResponse();
		Request getRequest() const;
		void updateTime();
		//TODO make request/response private?
		Request request;
		Response response;
	private:		
		http::Server        server;
		int	client_socket;
		struct sockaddr_in client_address;
		time_t			time_of_last_msg;
		
		
};

#endif