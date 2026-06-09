Name:           omemo-c
Summary:        Lib omemo
Version:        0.5.0
Release:        1
License:        Lesser GNU General Public License
URL:            https://github.com/dino/libomemo-c/archive/refs/heads
Source0:        omemo.zip

BuildRequires:  gcc-c++
BuildRequires:  cmake
BuildRequires:  check-devel
BuildRequires:  openssl-devel

%description
Lib omemo 

%package devel
Summary:        Development package of %{name}
Requires:       %{name} = %{version}
Provides:		%{name}-devel

%description devel
Contains files needed to development with %{name}.

%prep

%build
mkdir -p build
pushd build
%cmake .. \
-D CMAKE_POSITION_INDEPENDENT_CODE=ON \
-D BUILD_TESTING=ON
%make_build 
popd

%install
pushd build
%make_install 
popd 

%post   
/sbin/ldconfig

%postun 
/sbin/ldconfig

%files 
%defattr(-, root, root, -)
%{_libdir}/libomemo-c.so
%{_libdir}/libomemo-c.so.*

%files devel
%doc LICENSE
%defattr(-, root, root, -)
%{_includedir}/*/*.h
%{_libdir}/pkgconfig/lib%{name}.pc
%{_libdir}/libomemo-c.so
%{_libdir}/libomemo-c.so.*
