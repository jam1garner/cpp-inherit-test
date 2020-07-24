fn main() {
    cc::Build::new()
        .file("src/impl.cpp")
        .cpp(true)
        .compile("impl");
}
