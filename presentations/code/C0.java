public class C0<T> {
	private T inner;
	public C0(T inner) {
		super();
		this.inner = inner;
	}
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((inner==null) 
			? 0 : inner.hashCode());
		return result;
	}
	public boolean equals(Object obj) {
		if(this == obj)
			return true;
		if(obj == null)
			return false;
		if(getClass() != obj.getClass())
			return false;
		C0 other = (C0) obj;
		if(inner == null) {
			if(other.inner != null)
				return false;
		} else if(!inner.equals(other.inner))
			return false;
		return true;
	}
}
