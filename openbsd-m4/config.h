#define __dead /* TODO */

/*
 * NOTE: these tests must match those in buildfile.
 */
#if !defined(__FreeBSD__) && \
    !defined(__OpenBSD__) && \
    !defined(__NetBSD__)
extern void *reallocarray(void *, size_t, size_t);
#endif

#if !defined(__FreeBSD__) && \
    !defined(__OpenBSD__) && \
    !defined(__NetBSD__)  && \
    !defined(__APPLE__)
extern size_t strlcpy(char *, const char *, size_t);
#endif

#if !defined(__FreeBSD__) && \
    !defined(__OpenBSD__) && \
    !defined(__NetBSD__)
extern long long strtonum(const char *, long long, long long, const char **);
#endif
