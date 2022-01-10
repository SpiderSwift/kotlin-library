package by.citech.library

data class Generic<T>(private var t: T?) {

    fun set(t: T?) {
        this.t = t
    }

    fun get() : T? {
        return t
    }

}