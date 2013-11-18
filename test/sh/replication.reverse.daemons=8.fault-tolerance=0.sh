#!/bin/sh
SPACE="space replication key int A attributes int B, int C subspace C subspace B create 8 partitions tolerate 0 failures"
exec python "${HYPERDEX_SRCDIR}"/test/runner.py --daemons=8 --space="${SPACE}" -- \
     "${HYPERDEX_BUILDDIR}"/test/replication-stress-test --quiet -n 8 -h {HOST} -p {PORT}
