Name:           omemo-c
Summary:        Lib omemo
Version:        0.4.0
Release:        1
License:        Lesser GNU General Public License
URL:            https://github.com/dino/libomemo-c/archive/refs/heads
Source0:        omemo.zip

BuildRequires:  gcc-c++
BuildRequires:  cmake

%description
Lib omemo 

%package devel
Summary:        Development package of %{name}
Requires:       %{name} = %{version}
Provides:		%{name}-devel

%description devel
Contains files needed to development with %{name}.

%prep
%autosetup -p1 -n %{name}-%{version}/%{name}

%build
mkdir -p build
pushd build
%cmake .. \
-D BUILD_SHARED_LIBS=OFF \
-D CMAKE_POSITION_INDEPENDENT_CODE=ON
%make_build 
popd

%install
pushd build
%make_install 
cp -Ra %{_sourcedir}/../build/src/libomemo-c.a %{buildroot}%{_libdir}
popd 

%post   
/sbin/ldconfig

%postun 
/sbin/ldconfig

%files 
%defattr(-, root, root, -)

%files devel
%doc LICENSE
%defattr(-, root, root, -)
%{_libdir}/lib%{name}.a
%{_includedir}/*/*.h
%{_libdir}/pkgconfig/lib%{name}.pc
