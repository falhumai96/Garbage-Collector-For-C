Vagrant.configure("2") do |config|
  
  config.vm.box = "bento/ubuntu-16.04"

  config.vm.provider "virtualbox" do |vb|

    vb.memory = "1024"
  
  end

  config.vm.provision :shell, path: "bootstrap.sh"

end
