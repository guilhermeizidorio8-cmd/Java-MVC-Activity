package View;

import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import javax.swing.JMenuBar;

public class FrameInicial extends JFrame {
	private static final long serialVersionUID = 1L;
	private JMenuBar menuBar;
	private JMenu menuCadastrar;
	private JMenu menuConsultar;
	private JMenuItem MenuItemCadastrarArtista;
	
	public static void main(String[]args) {
		new FrameInicial();
	}
	
	public FrameInicial() {
		super();
		setTitle("Ispotifai");
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setVisible(true);
		this.setLocationRelativeTo(null);
		this.setSize(800, 600);
		setJMenuBar(getMenuBar_1());
	}

	public JMenuBar getMenuBar_1() {
		if (menuBar == null) {
			menuBar = new JMenuBar();
			menuBar.add(getMenuCadastrar());
			menuBar.add(getMenuConsultar());
		}
		return menuBar;
	}
	public JMenu getMenuCadastrar() {
		if (menuCadastrar == null) {
			menuCadastrar = new JMenu("Cadastrar");
			menuCadastrar.add(getMenuItemCadastrarArtista());
		}
		return menuCadastrar;
	}
	public JMenu getMenuConsultar() {
		if (menuConsultar == null) {
			menuConsultar = new JMenu("Consultar");
		}
		return menuConsultar;
	}
	public JMenuItem getMenuItemCadastrarArtista() {
		if (MenuItemCadastrarArtista == null) {
			MenuItemCadastrarArtista = new JMenuItem("Artista");
		}
		return MenuItemCadastrarArtista;
	}
	
	
}
