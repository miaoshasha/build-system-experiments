FOO_BUILD_SH="""
#!/bin/bash
git clone https://github.com/miaoshasha/colmap.git
cd foo
git checkout ad7bd93f1a27af7533121aa043a167fe1490688c
./configure
make
"""

FOO_BUILD="""
cc_library(
    name = "bar",
    srcs = ["bar.a"],
    hdrs = glob(["*.h"]),
)
"""

def _foo_repository_impl(ctxt):
    ctxt.file("foo_build.sh", content=FOO_BUILD_SH)
    ctxt.file("BUILD", content=FOO_BUILD, executable=False)
    ctxt.execute(["./foo_build.sh"])

foo_repository = repository_rule(
    implementation = _foo_repository_impl,
    environ = ["CC", "CXX", "LD_LIBRARY_PATH"],
    local = True,
    ...
)

foo_repository(
    name = "foo",
)