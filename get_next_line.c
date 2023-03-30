/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inchoi <inchoi@student.42Seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:38:28 by inchoi            #+#    #+#             */
/*   Updated: 2023/03/27 17:40:53 by inchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char        buffer[BUFFER_SIZE + 1];
    static char *remain;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (0);
    x = read(fd, buffer, BUFFER_SIZE);
    if (x == -1)
        return (0);
    n = ft_strchr(buffer, '\n');
    if (n == 1)
    {
        remain = (char *)malloc( * sizeof(char));
        while (i < )
        {
            remain[i] = buffer[i];
        }
    }
        return (0);
    
    
    return (remain);
}
