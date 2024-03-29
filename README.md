ANUChem computational chemistry suite

This program is controlled by the Eclipse Public Licence v1.0 http://www.eclipse.org/legal/epl-v10.html

Overview:
------------

ANUChem is a suite of computational chemistry codes written in the X10 programming language.
http://x10.codehaus.org/

It is intended to test the expressiveness, performance and scalability of X10 for use in developing scientific application codes.

ANUChem currently contains three significant application codes:

pumjarasaayani (Quantum Chemistry): solves the molecular electronic structure problem using the Hartree-Fock/self-consistent field method.
fmm (PGAS-FMM): calculates the electrostatic potential of a system of charged particles using the Fast Multipole Method.
pme (Particle Mesh Ewald): calculates electrostatic potential using the Smooth Particle Mesh Ewald method.

The individual codes are described in ${appname}/doc/README including the build process and test inputs.

In addition, there are a number of smaller codes contained in ./samples and ./microbenchmarks.  These are codes from outside the chemistry domain which exercise specific features of the X10 language.

Compiling:
----------

$ ant

will build and test the major application codes in ANUChem (fmm, pme and pumjarasaayani).

Each application or sample subdirectory also has either an Ant build script or a Makefile.


Working with ANUChem:
-----------------------------

The codes are under continuous revision and the current source is available at http://sourceforge.net/p/anuchem/code

In addition, there are source distributions containing tagged "release" versions of the source code that compile against each released version of X10.

For any questions about building, testing or extending ANUChem, please email josh.milthorpe@anu.edu.au

ANUChem is free software under the Eclipse Public License.


Referencing ANUChem:
-----------------------------

Please cite the following paper when referencing ANUChem in a publication.

J. Milthorpe, V. Ganesh, A.P. Rendell, and D. Grove (2011). "X10 as a parallel language for scientific computation: practice and experience", in proceedings of the 25th IEEE International Parallel & Distributed Processing Symposium (ISBN 978-0-7695-4385-7), 1080-1088 doi:10.1109/IPDPS.2011.103

