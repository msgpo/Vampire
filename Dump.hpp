/** This software is an adaptation of the theorem prover Vampire for
 * working with large knowledge bases in the KIF format, see 
 * http://www.prover.info for publications on Vampire.
 *
 * Copyright (C) Andrei Voronkov and Alexandre Riazanov
 *
 * @author Alexandre Riazanov <riazanov@cs.man.ac.uk>
 * @author Andrei Voronkov <voronkov@cs.man.ac.uk>, <andrei@voronkov.com>
 *
 * @date 06/06/2003
 * 
 * This software is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Also add information on how to contact you by electronic and paper mail.
 */

//
//  file Dump.hpp
//  defines class Dump
//


#ifndef __Dump__
#define __Dump__


// class ostream;


enum DumpTag {
  DUMP_UNIT = 0
};


class Unit;


// ******************* class Dump, definition *********************


class Dump {
 public:
  // constructor
  Dump (ostream& dump);

  // dump various types
  void pointer (void*);
  void unit (const Unit& unit);

 private:
  ostream& _dump;
  int _nextPointer;
}; // class Dump


// ******************* class Dump, implementation *********************


#endif // __Dump__
