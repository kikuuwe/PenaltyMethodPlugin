/* 
 This file is a part of PenaltyMethodPlugin.
 
 Author: Shin'ichiro Nakaoka
 Author: Ryo Kikuuwe
 
 Copyright (c) 2007-2015 Shin'ichiro Nakaoka
 Copyright (c) 2014-2015 Ryo Kikuuwe
 Copyright (c) 2007-2015 National Institute of Advanced Industrial
                         Science and Technology (AIST)
 Copyright (c) 2014-2015 Kyushu University

 PenaltyMethodPlugin is a plugin for Choreonoid to use penalty-based method.
 
 PenaltyMethodPlugin is a free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 PenaltyMethodPlugin is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with PenaltyMethodPlugin; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
 Contact: Ryo Kikuuwe, kikuuwe@ieee.org
*/


#include "PMSimulatorItem.h"
#include <cnoid/Plugin>

using namespace cnoid;

namespace {
  
class PenaltyMethodPlugin : public Plugin
{
public:
    PenaltyMethodPlugin() : Plugin("PenaltyMethod") {
        require("Body");
    }

    virtual bool initialize(){
        PMSimulatorItem::initializeClass(this);
        return true;
    }

};
}

CNOID_IMPLEMENT_PLUGIN_ENTRY(PenaltyMethodPlugin);
