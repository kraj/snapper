/*
 * Copyright (c) 2023 SUSE LLC
 *
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, contact Novell, Inc.
 *
 * To contact Novell about this file by physical or electronic mail, you may
 * find current contact information at www.novell.com.
 */


#ifndef SNAPPER_PLUGINS_H
#define SNAPPER_PLUGINS_H


#include <string>
#include <vector>


namespace snapper
{
    using std::string;
    using std::vector;


    namespace Plugins
    {

	struct Report
	{

	    struct Entry
	    {
		Entry(const string& name, const vector<string>& args, int exit_status);

		string name;
		vector<string> args;
		int exit_status;
	    };

	    void clear();

	    vector<Entry> entries;

	};

    }

}

#endif
