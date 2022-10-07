/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahoud <flahoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:27:37 by flahoud           #+#    #+#             */
/*   Updated: 2022/10/07 11:29:29 by flahoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i]; i++) {
		for (size_t j = 0; j < strlen(argv[i]); j++) {
			argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i][j];
		}
	}
	std::cout << "\n";
	return 0;
}