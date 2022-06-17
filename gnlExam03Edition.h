/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_exam_03_edition.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:22:48 by ullorent          #+#    #+#             */
/*   Updated: 2022/03/24 17:37:47 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNLEXAM03EDITIONH
#define GNLEXAM03EDITIONH

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *getNextLine(int fd);
char *ftAux(char *line, char buff);
int ftGnlChecker(char *line);

#endif