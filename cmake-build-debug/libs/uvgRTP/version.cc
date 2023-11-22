#include "uvgrtp/version.hh"

#include <cstdint>
#include <string>

namespace uvgrtp {

#ifdef RTP_RELEASE_COMMIT
    std::string get_version() { return "2.3.0-release"; }
#else
    std::string get_version() { return "2.3.0-a727200"; }
#endif

uint16_t get_version_major() { return 2; }

uint16_t get_version_minor() { return 3; }

uint16_t get_version_patch() { return 0; }

std::string get_git_hash() {return "a727200";}
} // namespace uvgrtp
