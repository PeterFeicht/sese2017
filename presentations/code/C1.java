public class C1<T> {
	private final T inner;
	public C1(T inner) {
		this.inner = inner;
	}
	public int hashCode() {
		return 31 + ((inner == null) ? 0 : 
				inner.hashCode());
	}
	public boolean equals(Object c) {
		return c == this ||
				c != null && getClass() == 
				c.getClass() &&	equals((C1) c);
	}
	private boolean equals(C1 c) {
		return inner == null ?
				c.inner == null : 
				inner.equals(c.inner);
	}
}
