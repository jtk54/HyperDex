// Copyright (c) 2011, Cornell University
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of HyperDex nor the names of its contributors may be
//       used to endorse or promote products derived from this software without
//       specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef hyperdex_hyperdexm_h_
#define hyperdex_hyperdexm_h_

// ZooKeeper
#define THREADED
#include <zookeeper.h>
#undef THREADED

// Libev
#include <ev++.h>

// po6
#include <po6/net/location.h>

namespace hyperdex
{

void
watcher(zhandle_t* zk, int type, int state, const char* path, void* ctx);

void
daemons_watcher(zhandle_t* zk, int type, int state, const char* path, void* ctx);

void
daemons_update(int rc, const struct String_vector *strings, const void *data);

class hyperdexm
{
    public:
        hyperdexm();
        ~hyperdexm();

    public:
        // This method blocks until the daemon is done running.
        // The signal handlers of the calling thread will be affected.
        void run();

    private:
        friend void hyperdex::watcher(zhandle_t*, int, int, const char*, void*);
        friend void hyperdex::daemons_watcher(zhandle_t*, int, int, const char*, void*);

    private:
        void watch_for_daemons(zhandle_t* zk);
        void HUP(ev::sig& s, int sig);
        void INT(ev::sig& s, int sig);
        void QUIT(ev::sig& s, int sig);
        void TERM(ev::sig& s, int sig);
        void USR1(ev::sig& s, int sig);
        void USR2(ev::sig& s, int sig);
        void abort();

    private:
        ev::async m_wakeup;
        bool m_continue;
};

#endif // hyperdex_hyperdexm_h_

} // namespace hyperdex