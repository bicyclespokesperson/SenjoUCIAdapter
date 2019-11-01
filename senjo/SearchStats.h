//-----------------------------------------------------------------------------
// Copyright (c) 2019 Shawn Chidester <zd3nik@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//-----------------------------------------------------------------------------

#ifndef BB_SEARCH_STATS_H
#define BB_SEARCH_STATS_H

#include "Platform.h"

namespace senjo {

struct SearchStats {
  std::string move;        // The move currently being searched
  int      movenum    = 0; // The number of the move currently being searched
  int      depth      = 0; // The current search depth
  int      seldepth   = 0; // The maximum selective depth reached on "move"
  uint64_t nodes      = 0; // The number of nodes searched so far
  uint64_t qnodes     = 0; // The number of quiescence nodes searched so far
  uint64_t msecs      = 0; // The number of milliseconds spent searching so far
};

} // namespace senjo

#endif // BB_SEARCH_STATS_H
