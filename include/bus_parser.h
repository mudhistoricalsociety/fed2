/*-----------------------------------------------------------------------
                          Federation 2
              Copyright (c) 1985-2018 Alan Lenton

This program is free software: you can redistribute it and /or modify 
it under the terms of the GNU General Public License as published by 
the Free Software Foundation: either version 2 of the License, or (at 
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY: without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
General Public License for more details.

You can find the full text of the GNU General Public Licence at
           http://www.gnu.org/copyleft/gpl.html

Programming and design:     Alan Lenton (email: alan@ibgames.com)
Home website:                   www.ibgames.net/alan
-----------------------------------------------------------------------*/

#ifndef BUSPARSER_H
#define BUSPARSER_H

#include "xml_parser.h"

class Business;
class	FedMap;
class	Player;
class	Share;

class BusinessParser : public XMLParser
{
private:
	static const char	*el_names[];

	Business			*company;	// company being processed
	Share				*share;		// share block being processed

	void	EndElement(const char *element);
	void	StartBid(const char **attrib);
	void	StartElement(const char *element,const char **attrib);
	void	StartPermit(const char **attrib);
	void	StartShare(const char **attrib);

public:
	BusinessParser();
	virtual ~BusinessParser();
};

#endif

