package Model;

public class Musica {
	
	//Variaveis
	private String artista;
	private String nome;
	private String ritmo;
	private String anoGravacao;
	private boolean original;
	private String album;
	
	// Construtores
	public Musica() {
	}
	public Musica(String artista, String nome, String ritmo, String anoGravacao, boolean original, String album) {
		this.artista = artista;
		this.nome = nome;
		this.ritmo = ritmo;
		this.anoGravacao = anoGravacao;
		this.original = original;
		this.album = album;
	}
	
	// Getters e Setters
	public String getArtista() {
		return artista;
	}
	public void setArtista(String artista) {
		this.artista = artista;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getRitmo() {
		return ritmo;
	}
	public void setRitmo(String ritmo) {
		this.ritmo = ritmo;
	}
	public String getAnoGravacao() {
		return anoGravacao;
	}
	public void setAnoGravacao(String anoGravacao) {
		this.anoGravacao = anoGravacao;
	}
	public boolean getOriginal() {
		return original;
	}
	public void setOriginal(boolean original) {
		this.original = original;
	}
	public String getAlbum() {
		return album;
	}
	public void setAlbum(String album) {
		this.album = album;
	}
	
	
}
