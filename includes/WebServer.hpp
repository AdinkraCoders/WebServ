/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WebServer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:17:10 by hrings            #+#    #+#             */
/*   Updated: 2023/03/06 14:53:45 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEBSERVER_HPP
# define WEBSERVER_HPP

#include <vector>
# include <iostream>
# include <utility>
# include <string>
# include <sstream>
# include <unistd.h>
# include <fcntl.h>
# include <cstdlib>
# include "Server.hpp"
# include <sys/time.h>

#define BUFFER_SIZE 65535
#define EOL "\r\n"
#endif