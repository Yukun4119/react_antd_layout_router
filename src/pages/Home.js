import react from "react";
import { Layout, Menu, Breadcrumb } from 'antd';
import "./styles.css"
import 'antd/dist/antd.css';
import { BrowserRouter,Routes, Route,useLocation, Link} from 'react-router-dom';
const { Header, Content, Footer, Switch } = Layout;

const Home = () => {
    return(
        <div>
            <Layout>
                <Header style={{ position: 'fixed', zIndex: 1, width: '100%' }}>
                <div className="logo" />
                <Menu theme="dark" mode="horizontal" defaultSelectedKeys={['1']}>
                    <Menu.Item key="1">
                        <Link to="/">
                            Home
                        </Link>
                    </Menu.Item>
                    <Menu.Item key="2">
                        <Link to="/p2">
                            p2
                        </Link>
                    </Menu.Item>
                    <Menu.Item key="3">
                        <Link to="/p3">
                            p3
                        </Link>
                    </Menu.Item>
                </Menu>
                </Header>
                <Content className="site-layout" style={{ padding: '0 50px', marginTop: 64 }}>
                <Breadcrumb style={{ margin: '16px 0' }}>
                    <Breadcrumb.Item>Home</Breadcrumb.Item>
                    <Breadcrumb.Item>List</Breadcrumb.Item>
                    <Breadcrumb.Item>App</Breadcrumb.Item>
                </Breadcrumb>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                <div className="site-layout-background" style={{ padding: 24, minHeight: 380 }}>
                    Home
                </div>
                </Content>
                <Footer style={{ textAlign: 'center' }}>Ant Design ©2018 Created by Ant UED</Footer>
            </Layout>   
        </div>
    );
}
export default Home